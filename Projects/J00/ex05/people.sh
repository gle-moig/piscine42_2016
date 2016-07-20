ldapsearch -LLLS cn "(uid=z*)" cn 2> /dev/null | cut -c5- | grep ^Z | sort -rf
