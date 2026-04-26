def GetDoomsday(year):
    century, yearEnd = divmod(year, 100)

    baseDates = [2, 0, 5, 3]
    baseDate = baseDates[century % 4]

    a, b = divmod(yearEnd, 12)
    c = b // 4

    return (baseDate + a + b + c) % 7

def IsLeapYear(year):
    if year % 400 == 0:
        return True

    if year % 100 == 0:
        return False

    return year % 4 == 0

def GetPlusDay(year, month, day):
    sameDays = [3, 28, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12]

    if IsLeapYear(year):
        sameDays[0] += 1
        sameDays[1] += 1

    return (day - sameDays[month - 1]) % 7

year, month, day = map(int, input().split())

doomsday = GetDoomsday(year)
plusDay = GetPlusDay(year, month, day)

dowIndex = (doomsday + plusDay) % 7
weekDays = ["sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"]

print(weekDays[dowIndex])