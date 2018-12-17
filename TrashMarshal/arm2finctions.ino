void arm2push()
{
  for(arm2pos=45 ; arm2pos <160 ; arm2pos++)
  {
    arm2.write(arm2pos);
    delay(7); 
  }

  for(int arm2pos=160 ; arm2pos >45 ; arm2pos--)
  {
    arm2.write(arm2pos);
    delay(3); 
  }
}
