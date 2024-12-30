#include "get_next_line.h"
#include "stdio.h"
#include "fcntl.h"

// char *get_nl(char *buf)
// {
// 	int		i;
// 	int 	tempint;
// 	char	*temp;
// 	int		count;

// 	i = 0;
// 	count = 0;
// 	if (!buf[i])
// 		return (NULL);
// 	while (buf[i] && buf[i] != '\n')
// 		i++;
// 	if (buf[i] == '\n')
// 		i++;
// 	temp = (char *)malloc((sizeof(char) * (i)) + 1);
// 	if (!temp)
// 		return (NULL);
// 	while (count < i)
// 	{
// 		temp[count] = buf[count];
// 		count++;
// 	}
// 	temp[count] = '\0';
// 	return (temp);
// }

// char *continuing_nl(char *buffer)
// {
// 	int i;
// 	char *newline;
// 	int count;

// 	i = 0;
// 	count = 0;
// 	if (!buffer)
// 		return (NULL);
// 	while (buffer[i] && buffer[i] != '\n')
// 		i++;
// 	if (!buffer[i] || !buffer[i + 1])
// 		return (free(buffer), NULL);
// 	newline = (char *)malloc(sizeof(char) * (str_len(buffer) - i));
// 	if (!newline)
// 		return (NULL);
// 	i++;
// 	while (buffer[i])
// 		newline[count++] = buffer[i++];
// 	newline[count] = '\0';
// 	free(buffer);
// 	return (newline);
// }

// char *read_file(int fd, char *buffer)
// {
// 	int read_number;
// 	char *str;

// 	str = buf_calloc(BUFFER_SIZE + 1);
// 	if (!buffer)
// 		buffer = buf_calloc(1);
// 	while (read_number > 0)
// 	{
// 		read_number = read(fd, str, BUFFER_SIZE);
// 		if (read_number < 0)
// 			return (free(buffer), NULL);
// 		str[read_number] = '\0';
// 		buffer = str_join(buffer, str);
// 		if (str_find_nl(str))
// 			read_number = -1;
// 	}
// 	free(str);
// 	return (buffer); 
// }

// char	*get_next_line(int fd)
// {
// 	static char	*buffer;
// 	char		*completed;	

// 	if (fd < 0 || BUFFER_SIZE <= 0)
// 		return (NULL);
// 	buffer = read_file(fd, buffer);
// 	completed = get_nl(buffer);
// 	buffer = continuing_nl(buffer);

// 	return (completed);
// }

int main(void)
{
	char *buf2;
	char *buf3;

	// int fd = open("/home/nakbas/Desktop/not.txt", O_RDONLY);
	// // buf = buf_calloc(BUFFER_SIZE + 1);
	// // int i = read(fd,buf,BUFFER_SIZE);
	// // buf[i] = '\0';
	// while((buf = get_next_line(fd)) != NULL)
	// {
	// 	printf("%s", buf);
	// 	free(buf);
	// }
	int fd1 = open("test1.txt", O_RDONLY);
	int fd2 = open("test2.txt", O_RDONLY);
	int k = 0;
	while(k < 2)
	{
		buf2 = get_next_line(fd1);
		printf("%s", buf2);
		free(buf2);
		buf3 = get_next_line(fd2);
		printf("%s", buf3);
		free(buf3);
		k++;
	}

	// printf("bufsız:%s", buf);
	// printf("buflı:%s", buf);
	
	//buf = get_next_line(fd);
	// printf("gnl:%d", str_len(buf));
	// buf = str_join("nedim", "akbas");
	// printf("ENSON:%s", buf);
	//printf("sayisi:%d", str_len(buf));
	close(fd1);
	close(fd2);
	return 0;
}

// int main()
// {
//     char *buf;
//     int fd = open("/home/nakbas/Desktop/not.txt",O_RDONLY);
//     buf = (char *)malloc(sizeof(char) * 36);
//     read(fd, buf, 35);
//     printf("%s", buf);
//     free(buf);
// }