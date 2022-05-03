
syscall::open:entry
/ copyinstr(arg0) == "/home/f1/f1.txt" || copyinstr(arg0) == "/home/f2/f2.txt" || copyinstr(arg0) == "/home.f3/f3.txt || copyinstr(arg0) == "/home/f4/f4.txt" /
{
        file = copyinstr(arg0);
	printf("\n %s opened by user uid %d \n",copyinstr(arg0),uid);


}

syscall::open:return
/file  == "/home/f1/f1.txt" || file == "/home/f2/f2.txt" || file == "/home/f3/f3.txt" || file == "/home/f4/f4.txt" / 
{
	printf("\n opened call returned file with fd  %d \n",arg0);
}


/*

proc:::exec
/ execname  == "output.txt" ||execname == "/home/A/output.txt" /
 {

	printf("\n new process %s  called by user with uid %d\n",execname,uid);
}

*/

proc:::exit

/file  == "/home/f1/f1.txt" || file == "/home/f2/f2.txt" || file == "/home/f3/f3.txt" || file == "/home/f4/f4.txt" /
{ 
	printf("\n%s provcess exited,return value is %d\n",execname,arg0);
}

syscall::close:entry
/file  == "/home/f1/f1.txt" || file == "/home/f2/f2.txt" || file == "/home/f3/f3.txt" || file == "/home/f4/f4.txt" / 
{
	printf("\n close callled with file descriptor %d\n",arg0);

}


syscall::close:entry
/file  == "/home/f1/f1.txt" || file == "/home/f2/f2.txt" || file == "/home/f3/f3.txt" || file == "/home/f4/f4.txt" / 
{


	printf("\n close callled with file descriptor %d\n",arg0);

}

syscall::close:entry
/file  == "/home/f1/f1.txt" || file == "/home/f2/f2.txt" || file == "/home/f3/f3.txt" || file == "/home/f4/f4.txt" / 
{

	printf("close returned with %d\n",arg0);

}

proc:::exec-failure
{
  printf("\n process failed to start \n");

}


proc:::exec-success{


	printf("%s process pid %d success\n",execname,pid);

}
