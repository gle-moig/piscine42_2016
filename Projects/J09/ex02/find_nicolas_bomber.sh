cat $1 | grep -i "nicolas\tbomber" | grep '-' | egrep '[:digits:].{10,}' | awk '{print $(NF-1)}'