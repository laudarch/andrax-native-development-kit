get_filename_component(LIBSSH_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

if (EXISTS "${LIBSSH_CMAKE_DIR}/CMakeCache.txt")
    # In build tree
    include(${LIBSSH_CMAKE_DIR}/libssh-build-tree-settings.cmake)
else()
    set(LIBSSH_INCLUDE_DIR /data/data/com.thecrackertechnology.andrax/ANDRAX/libssh/include)
endif()

set(LIBSSH_LIBRARY /data/data/com.thecrackertechnology.andrax/ANDRAX/libssh/lib/libssh.so)
set(LIBSSH_LIBRARIES /data/data/com.thecrackertechnology.andrax/ANDRAX/libssh/lib/libssh.so)

set(LIBSSH_THREADS_LIBRARY /data/data/com.thecrackertechnology.andrax/ANDRAX/libssh/lib/libssh.so)
