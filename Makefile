target:
	g++ pointers.cpp -o outputFile

clean:
	-rm  outputFile

add:
	git add .

commit:
	git commit -m "commit"

push:
	git push --no-verify
