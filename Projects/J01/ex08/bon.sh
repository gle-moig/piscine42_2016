ldapsearch cn 2> /dev/null | grep ^cn | grep BON | wc -l | sed "s/^\ \ *//"
