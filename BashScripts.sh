#Create the directory structure
for i in $(seq 1 15); do mkdir "Week $i" && touch ./"Week $i"/notes.txt; done
