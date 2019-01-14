Name:    dbuddy
Summary: Dungeon Buddy nethack note-taking tool
Version: 1.0
Release: 1%{?dist}

License: GPLv2
URL:     https://github.com/sigalrm/dbuddy
Source:  dbuddy-%{version}.tar.gz

BuildRequires: autoconf automake
BuildRequires: ncurses-devel
BuildRequires: gcc-c++

%description
Dungeon Buddy is a note-taking helper for playing nethack.
Track information about levels, in-game items, and more.

%prep
%autosetup

%build
%configure
%make_build

%install
%make_install

%files
%{_bindir}/dbuddy
