string = input("Enter a word or a sentence: ")
if any(char in string for char in (" ", ".", "@")):
    def CheckSentencePalindrome(string):
        for char in string:
            if char == " ":
                continue
            startIndex = 0
            endIndex = len(string) - 1
            for x in string:
                if string[startIndex] != string[endIndex]:
                    print("It is not a palindrome.")
                    break
                else:
                    print("It is a palindrome.")
                    break
            break
    CheckSentencePalindrome(string)
else:
    def CheckWordPalindrome(string):
        startIndex = 0
        endIndex = len(string) - 1
        for x in string:
            if string[startIndex] != string[endIndex]:
                print("It is not a palindrome.")
                break
            else:
                print("It is a palindrome.")
                break
    CheckWordPalindrome(string)
