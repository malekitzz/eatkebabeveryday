timestamp=$(stat -f "%m" bomb.txt)
result=$(bc <<< "$timestamp - 1")
echo $result
