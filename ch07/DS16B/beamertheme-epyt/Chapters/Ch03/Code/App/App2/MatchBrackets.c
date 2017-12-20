int MatchBrackets (SqStack * S)
{
  char ch, x;
  scanf("%c", &ch);
  while (asc(ch) != 13)
  {
    if ( ( ch == '(' ) || ( ch == '[' ) )
      Push(S, ch);
    else if ( ch == ']' )
    {
      x = Pop(S);
      if ( x != '[' )
      {
        printf("[ not matching!\n");
        return FALSE;
      }
    } 
    else if ( ch == ')' )
    {
      x = pop(S);
      if( x != '(' )
      {
        printf("( not matching!\n");
        return FALSE;
      }
    }
  }
  if (S->top != 0)
  {
    printf("括号数量不匹配");
    return FALSE;
  }
  else return TRUE;
}
