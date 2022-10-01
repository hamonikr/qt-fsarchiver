#!/bin/bash

CDIR=${PWD##*/}
ORIG="qt-fsarchiver-0.8.5.18"
DEBDIR="RELEASE"

cd ..
[ -d "./$CDIR/$DEBDIR" ] && rm -rf ./$CDIR/$DEBDIR
mkdir -p ./$CDIR/$DEBDIR/$ORIG
cp -av ./$CDIR/* ./$CDIR/$DEBDIR/$ORIG/
cd ./$CDIR/$DEBDIR/$ORIG

dh_make --createorig -i -c gpl3

dpkg-buildpackage -k9FA298A1E42665B8

cd ..

echo "look at './$DEBDIR' directory, there are all created debian packages."
