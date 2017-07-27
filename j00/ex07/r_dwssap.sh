cat /etc/passwd | sed '/^#/d' | awk -F":" '{print $1}' | sed -n 'n;p' | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | rev | tr '\n' ' ' | sed "s/ /, /g" | sed "s/\(.*\)_,/\1_./"
