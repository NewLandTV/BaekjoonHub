p1, q1, p2, q2 = map(int, input().split())
s = p1 * p2 / q1 / q2 / 2

print(1 if s.is_integer() else 0)