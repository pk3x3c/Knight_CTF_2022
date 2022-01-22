# Compromised FTP
use file ftp.log

on using command = cat ftp.log | grep -v "FAIL LOGIN" | grep -v "CONNECT:"
you will get the required and 
flag = KCTF{ftpuser_192.168.1.7}

# The Lost Flag
use file img named "lost"

I used stegoveritas tool and found 1 iamge which revealed the flag

![image](https://user-images.githubusercontent.com/53575624/150638311-995b1958-920c-42a8-ac1a-538ab0c9c889.png)

# Let's Walk Together
Use file named interesting_wave.png

I used stegoveritas tool and found a hidden zip file which was password protected. Cracked the password and found the flag

KCTF{BiNw4lk_is_h3lpfUl}

