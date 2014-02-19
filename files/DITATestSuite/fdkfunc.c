// fdkfunc.c has a small code example
// Unicode: Mit freundlichen Grüßen

VoidT RunDOSCommand(StringT cmd, BoolT hide, BoolT keep)
{
	StringT command = NULL;

	command = F_StrNew(F_StrLen(ComSpec) + F_StrLen(cmd) + 5);
	F_StrCpy(command, ComSpec);
	F_StrCat(command, keep ? " /k " : " /c ");
	F_StrCat(command, cmd);

	RunCommand(command, CurrDir, True, hide, False);
	F_StrFree(command);
}

/* end of fdkfunc.c */
