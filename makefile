diskspeak: clean
	g++ main.cpp -o diskspeak
clean:
	touch diskspeak
	rm diskspeak
.PHONY: clean
