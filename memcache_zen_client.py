from pymemcache.client import Client

from memcached_zen_pb2 import Hash


class MemcacheZenClient(Client):
    def __init__(self, *args, **kwargs):
        super(MemcacheZenClient, self).__init__(*args, **kwargs)

    def hget(self, key, sub_keys):
        """
        :param key:
        :param sub_keys: A list of str.
        :return:
        TODO: How to differentiate whether those sub keys are missing or the whole key is missing.
        """
        result = self.get('%s|%s' % (key, ','.join(sub_keys)))
        h = Hash()
        h.ParseFromString(result)
        return {e.key: e.value for e in h.entries}

    def hset(self, key, sub_key_value_map, expire=0, noreply=True):
        """
        :param key:
        :param sub_key_value_map: A dict of str -> str.
        :param expire:
        :param noreply:
        :return:
        """

        h = Hash()
        for sub_key, sub_value in sub_key_value_map.iteritems():
            e = h.entries.add()
            e.key = sub_key
            e.value = sub_value
        value = h.SerializeToString()
        print "len(value): ", len(value)
        return self.set(key, value, expire, noreply)

    def sset(self, key, members, expire=0, noreply=True):
        """
        :param key:
        :param members: A list of str.
        :param expire:
        :param noreply:
        :return:
        """

        h = Hash()
        for member in members:
            e = h.entries.add()
            e.key = member
        value = h.SerializeToString()
        print "len(value): ", len(value)
        return self.set(key, value, expire, noreply)

    def sismember(self, key, members):
        """
        :param key:
        :param members: A list of str.
        :return:
        """
        result = self.get('%s|%s' % (key, ','.join(members)))
        h = Hash()
        h.ParseFromString(result)
        return [e.key for e in h.entries]
