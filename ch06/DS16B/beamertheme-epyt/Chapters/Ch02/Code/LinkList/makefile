#program name
main   = main
prog1  = CreateLinkListHead
prog2  = CreateLinkListTail
prog3  = GetElem
prog4  = ClearLinkList
prog5  = PrintLinkList
prog6  = LocateNodeKey
prog7  = InsertLNode
prog8  = DeleteLNodeIndex
prog9  = DeleteLNodeKey

########################################################
cmplr = gcc
objects1 = $(main).o $(prog1).o $(prog2).o $(prog3).o $(prog4).o $(prog5).o $(prog6).o $(prog7).o $(prog8).o $(prog9).o 

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
$(prog5).o: $(prog5).c
	$(cmplr) -c -g $(prog5).c
$(prog6).o: $(prog6).c
	$(cmplr) -c -g $(prog6).c
$(prog7).o: $(prog7).c
	$(cmplr) -c -g $(prog7).c
$(prog8).o: $(prog8).c
	$(cmplr) -c -g $(prog8).c
$(prog9).o: $(prog9).c
	$(cmplr) -c -g $(prog9).c

clean:
	rm -f *.o $(main)
