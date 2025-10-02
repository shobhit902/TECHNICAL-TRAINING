s = input("Enter a string: ")
vowels = "aeiouAEIOU"
count = sum(1 for c in s if c in vowels)
print("Number of vowels:", count)
