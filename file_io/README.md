# Input/Output

In computing, input/output (I/O, or informally io or IO) is the communication between an information processing system, such as a computer, and the outside world, possibly a human or another information processing system. Inputs are the signals or data received by the system and outputs are the signals or data sent from it. The term can also be used as part of an action; to "perform I/O" is to perform an input or output operation.

Souce: [wikipedia](https://en.wikipedia.org/wiki/Input/output)

## Tasks

<details><summary>0. Tread lightly, she is near</summary>
<p>Write a function that reads a text file and prints it to the POSIX standard output.</p>
<p>* Prototype: ssize_t read_textfile(const char *filename, size_t letters);</p>
<p>* where letters is the number of letters it should read and print</p>
<p>* returns the actual number of letters it could read and print</p>
<p>* if the file can not be opened or read, return 0</p>
<p>* if filename is NULL return 0</p>
<p>* if write fails or does not write the expected amount of bytes, return 0</p>
</details>

<details><summary>1. Under the snow</summary>
<p>Create a function that creates a file.</p>
<p>* Prototype: int create_file(const char *filename, char *text_content);</p>
<p>* where filename is the name of the file to create and text_content is a NULL terminated string to write to the file</p>
<p>* Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)</p>
<p>* The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.</p>
<p>* if the file already exists, truncate it</p>
<p>* if filename is NULL return -1</p>
<p>* if text_content is NULL create an empty file</p>
</details>

<details><summary>2. Speak gently, she can hear</summary>
<p>Write a function that appends text at the end of a file.</p>
<p>* Prototype: int append_text_to_file(const char *filename, char *text_content);</p>
<p>* where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file</p>
<p>* Return: 1 on success and -1 on failure</p>
<p>* Do not create the file if it does not exist</p>
<p>* If filename is NULL return -1</p>
<p>* If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file</p>
</details>

<details><summary>3. cp</summary>
<p>Write a program that copies the content of a file to another file.</p>
<p>* Usage: cp file_from file_to</p>
<p>* if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error</p>
<p>* if file_to already exists, truncate it</p>
<p>* if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error</p>
    <p>** where NAME_OF_THE_FILE is the first argument passed to your program</p>
<p>* if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error</p>
    <p>** where NAME_OF_THE_FILE is the second argument passed to your program</p>
<p>* if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error</p>
    <p>** where FD_VALUE is the value of the file descriptor</p>
<p>* Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions</p>
<p>* You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer</p>
<p>* You are allowed to use dprintf</p>
</details>