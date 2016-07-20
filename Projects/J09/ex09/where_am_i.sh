inet=`ifconfig | grep "inet " | cut -d ' ' -f2 | head -1 | cut -d "." -f1 | rev | cut -c3-`
if test $inet
then
ifconfig | grep "inet " | cut -d ' ' -f2
else
echo "Je suis perdu!"
fi
