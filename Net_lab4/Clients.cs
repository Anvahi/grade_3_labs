using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Net_lab4_classes;

namespace Net_lab4_classes {
    /// <summary>
    /// класс клиент
    /// </summary>
    public class Clients {
        /// <summary>
        /// Название
        /// </summary>
        public string Name { get; set; } = "";
        /// <summary>
        /// Вид собственности
        /// </summary>
        public string PropertyType { get; set; } = "";
        /// <summary>
        /// адрес
        /// </summary>
        public string Adress { get; set; } = "";
        /// <summary>
        /// телефон
        /// </summary>
        public string Phone { get; set; } = "";
        /// <summary>
        /// Контактное лицо
        /// </summary>
        public string ContactPerson { get; set; } = "";

        public Clients() { }

        public Clients(string _Name, string _PropertyType, string _Adress, string _Phone, string _ContactPerson) {
            this.Name = _Name;
            this.PropertyType = _PropertyType;
            this.Adress = _Adress;
            this.Phone = _Phone;
            this.ContactPerson = _ContactPerson;
        }

        public bool IsValid {
            get {
                if (String.IsNullOrWhiteSpace(Name))
                    return false;
                if (String.IsNullOrWhiteSpace(PropertyType))
                    return false;
                if (String.IsNullOrWhiteSpace(Adress))
                    return false;
                if (String.IsNullOrWhiteSpace(Phone))
                    return false;
                if (String.IsNullOrWhiteSpace(ContactPerson))
                    return false;
                return true;
            }
        }

        public override string ToString() {
            return $"Название: { Name }\r\nВид собственности: { PropertyType }\r\nАдрес: { Adress }\r\nТелефон: { Phone }\r\n Контактное лицо: {ContactPerson}";
        }
    }
}
