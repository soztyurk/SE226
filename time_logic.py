
totalSecond = int(input("Enter total seconds to calculate hours\n"))
hours = totalSecond // 3600
remaining = totalSecond % 3600
minutes = remaining // 60;
seconds = remaining % 60

print(
    f"{totalSecond} second is: {hours} hours {minutes} minutes {seconds} seconds")

