char *remove_white_spaces(char *str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] !=' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	return str;
}