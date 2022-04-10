syscall::open:entry
/copyinstr(arg0) == "/home/F/x.txt" || copyinstr(arg0) == "/home/S/y.txt" || copyinstr(arg0) == "/home/H/z.txt"/
{
	file = copyinstr(arg0);
	printf("\n%s is opened by the user with uid %d \n",copyinstr(arg0),uid);
}

syscall::open:return
/file == "/home/F/x.txt" || file == "/home/S/y.txt" || file == "/home/H/z.txt"/
{
	fd = arg0;
	printf("\nOpen call returned the file with file descriptor = %d\n",arg0);
	b = 1;
}

syscall::read:entry
/execname == "a.out" && b == 1 && arg0 == fd/
{
	printf("\nRead is called with the arguments fd = %d, size = %d\n",arg0,arg2);
	c = 1;
}

syscall::read:return
/execname == "a.out" && b == 1 && c == 1/
{
	printf("\number of bytes read = %d\n",arg0);
	c = 0;
}

syscall::write:entry
/execname == "a.out" && b == 1 && arg0 == fd/
{
	printf("\nWrite is called with the following arguments fd = %d\n, size = %d\n",arg0,arg2);
	d = 1;
}

syscall::write:return
/execname == "a.out" && b == 1 && d == 1/
{
	printf("\nWrite returned the number of bytes written = %d\n",arg0);

	d = 0;
}

syscall::close:entry
/execname == "a.out" /
{
	printf("\nClose called with ile descriptor = %d\n",arg0);
}

syscall::close:return
/execname == "a.out" && b == 1/
{
	printf("\nClose return with the following: %d\n",arg0);
}

proc:::exec
{
	printf("\nNew process called by user with uid %d\n",uid);
}

proc:::exit
{
	printf("\n%s process exited,return value is = %d\n",execname,arg0);}

proc:::exec-success
{
	printf("%s process with pid %d  is started  successfully\n",execname,pid);
}




proc:::exec-failure
{
	printf("\nThe process is failed to start\n");
}



