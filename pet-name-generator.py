import random
f_name = input("Type in the file name and type (e.g - 'textfile.txt'): ")
f = open(f_name)
f_content = f.read()
f_content_list = f_content.split("\n")
print(f_content_list)
f.close()
print(random.choice(f_content_list))