#program name
main   = main
prog1  = SqListInit
prog2  = SqListInsert
prog3  = SqListDelete
prog4  = SqListLocateDelete

########################################################
cmplr = gcc
objects1 = $(main).o $(prog1).o $(prog2).o $(prog3).o $(prog4).o 

$(main): $(objects1)
	$(cmplr)  $(objects1) -g
$(main).o: $(main).c
	$(cmplr) -c -g $(main).c
$(prog1).o: $(prog1).c
	$(cmplr) -c -g $(prog1).c
$(prog2).o: $(prog2).c
	$(cmplr) -c -g $(prog2).c
$(prog3).o: $(prog3).c
	$(cmplr) -c -g $(prog3).c
$(prog4).o: $(prog4).c
	$(cmplr) -c -g $(prog4).c

clean:
	rm -f *.o $(main)
