// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
char* task3(char *s)
{
  int len = 0, j = 0;
  for(int i = 0; s[i] != '\0'; i++){
    if(isdigit((unsigned char)input[i])) {
         len++; 
      }
  }
  char *s1 = (char *)malloc((len + 1) * sizeof(char));
  for(int i = 0; s[i] != '\0'; i++){
    if(isdigit((unsigned char)input[i])) {
         s1[j++] = s[i]; 
      }
  }
  s1[j] = '\0';
  return s1;
}
