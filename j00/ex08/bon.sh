ldapsearch -x 'sn=*BON*' | grep -i '^sn:' | wc -l | sed 's/ //g'
