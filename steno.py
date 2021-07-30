# Link to the command https://www.groovypost.com/howto/hide-text-inside-image-files/
# MSDN https://docs.microsoft.com/en-us/windows-server/administration/windows-commands/copy
# You can combine files and keep the original data via copy on windows
# This really intrigued me and I wanted to figure out how to do it programmatically.
# Reading MSDN's copy program's flags. "Indicates a binary file." & it copies the data
# At first I didn't know how copy worked, but viewing the binary made it more clear
# To add ascii text and not break the original file you need to write characters to the file
# The text has to be in binary mode. The b prefix
# I will not upload sample images to Github. This script/program will run as long as the image locations are correct.
def read():
    # Read binary data
    #rb = read binary data
    with open('freshImage.png','rb') as file:
        data = file.read()
        #print(data) #You can print if you'd like but a long time depending on the file is

def modify():
    #append binary data to said file
    with open('freshImage.png', 'a+b') as appendString:
        data = appendString.write(b"HiddenTextTest") #Will write this in the image


read()
modify()
