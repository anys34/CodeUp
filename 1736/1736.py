s = int(input())
day = int(s/86400)
s -= 86400*day

h = int(s/3600)
s -= 3600*h

m = int(s/60)
s -= 60*m

print(day, h, m, s)