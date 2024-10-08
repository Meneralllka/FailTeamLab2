#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/abdra/catkin_ws/src/dynamixel_motor/dynamixel_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/abdra/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/abdra/catkin_ws/install/lib/python3/dist-packages:/home/abdra/catkin_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/abdra/catkin_ws/build" \
    "/usr/bin/python3" \
    "/home/abdra/catkin_ws/src/dynamixel_motor/dynamixel_driver/setup.py" \
     \
    build --build-base "/home/abdra/catkin_ws/build/dynamixel_motor/dynamixel_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/abdra/catkin_ws/install" --install-scripts="/home/abdra/catkin_ws/install/bin"
