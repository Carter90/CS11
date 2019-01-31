#Create the directory structure
for i in {01..15}; do mkdir "$1/Week_$i" && touch "$1"/"Week_$i"/README.md; done
