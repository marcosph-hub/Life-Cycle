main: main.cc
	g++ -std=c++14 -g -Wall -o game_of_life main.cc grid.cc cell.cc state.cc deadstate.cc eggstate.cc larvastate.cc pupastate.cc adultstate.cc
grid.o: grid.cc
	g++ -std=c++14 -g -Wall -o grid grid.cc
cell.o: cell.cc	
	g++ -std=c++14 -g -Wall -o cell cell.cc
state.o: state.cc
	g++ -std=c++14 -g -Wall -o state state.cc
deadstate.o: deadstate.cc	
	g++ -std=c++14 -g -Wall -o deadstate deadstate.cc
eggstate.o: eggstate.cc
	g++ -std=c++14 -g -Wall -o eggstate eggstate.cc
larvastate.o: larvastate.cc
	g++ -std=c++14 -g -Wall -o larvastate larvastate.cc
pupastate.o: pupastate.cc
	g++ -std=c++14 -g -Wall -o pupastate pupastate.cc
adultstate.o: adultstate.cc
	g++ -std=c++14 -g -Wall -o adultstate adultstate.cc



clean: 
	rm -f game_of_life
