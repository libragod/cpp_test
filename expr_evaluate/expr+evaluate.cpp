
int main() {
  int i = 1;
  int n = 0;

  n = i++ * i++;
  
  i = 1;
  n = ++i * ++i;

  i = 1;
  n = ++i * i++; // *��������ֵ˳�򣿣�

  i = 1;
  n = i++ * ++i; // *��������ֵ˳�򣿣�

  i = 1;
  n = (i++, i++);

  return 0;
}