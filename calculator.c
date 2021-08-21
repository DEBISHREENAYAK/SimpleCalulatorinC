void  main()
{
  char operator;
  printf("enter the operator(-,+,*,/)");
  scanf("%c",&operator);

  double a,b;
  printf("enter any 2 numbers : ");
  scanf("%lf%lf",&a,&b);
  
  switch(operator)
  {
  case '-':printf("the substrction is :%lf",a-b);break;
  case '+':printf("the addtion is :%lf",a+b);break;
  case '*':printf("the multiplication is :%lf",a*b);break;
  case '/':printf("the division is :%lf",a/b);break;
 
}

}
