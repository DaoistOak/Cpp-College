let
  pkgs = import <nixpkgs> {};
in
pkgs.mkShell {
  buildInputs = with pkgs; [
    gcc
    gdb
    cmake
    clang-tools # Provides clangd
  ];

  shellHook = ''
    export CPATH="${pkgs.stdenv.cc.cc.lib}/include/c++/${pkgs.stdenv.cc.cc.version}:${pkgs.stdenv.cc.cc.lib}/include/c++/${pkgs.stdenv.cc.cc.version}/x86_64-unknown-linux-gnu:${pkgs.stdenv.cc.cc.lib}/include"
  '';
}
