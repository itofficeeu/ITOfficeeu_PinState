/*


  https://github.com/itofficeeu/sensor_Library

  Development environment specifics:
  Arduino IDE 1.8.3

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Arduino.h"

#define PIN 12

class ITO_PinState {
  public:

    void begin(uint8_t pinNumber = PIN);
    void on();
    void off();
    uint8_t status();

  private:
  
    uint8_t _pinNumber; // Keeps track of ...

};
