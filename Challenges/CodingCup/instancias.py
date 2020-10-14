# https://stackabuse.com/getting-user-input-in-python/
n = int(raw_input())
m = int(raw_input())
instances = dict()

for i in xrange(n):
    instance = raw_input()
    instance = instance.split(' ')[1]
    instances[instance] = instance

for i in xrange(m):
    instance = raw_input()
    instance = instance.split(' ')
    new = instance[2].replace(';', '').replace('\r', '')
    instances[instance[0]] = instances[new]
print len(set(instances.values()))
