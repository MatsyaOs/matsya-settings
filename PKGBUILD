
# Maintainer: Your Name <admin@matsyos.ml>
pkgname=matsya-settings
pkgver=1
pkgrel=1
pkgdesc="settings of Matsya Ui."
arch=('x86_64')
url="https://github.com/MatsyaOs/matsya-settings"
license=('GPL')
groups=('Matsya')
makedepends=('extra-cmake-modules' 'qt5-base' 'qt5-quickcontrols2' 'freetype2' 'fontconfig' 'networkmanager-qt' 'modemmanager-qt')
depends=( 'matsyaui'  'fontconfig'  'freetype2'  'icu'  'kcoreaddons'  'libxcursor'  'modemmanager-qt'  'networkmanager-qt'  'bluez-qt'
                  'bluedevil'  'libmatsya'  'qt5-quickcontrols')
source=('git'+'https://github.com/MatsyaOs/matsya-settings')
md5sums=('SKIP')


build() {

	cd "$srcdir"/matsya-settings/

  cmake -DCMAKE_INSTALL_PREFIX=/usr .
  make
}

package() {
  cd matsya-settings
  DESTDIR="$pkgdir" make install
}
