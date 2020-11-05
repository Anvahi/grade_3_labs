using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Net_lab4_classes;

namespace NET_lab4_classes  {
    /// <summary>
    /// Кредиты
    /// </summary>
    public class Credits : IValidatable
    {
        /// <summary>
        /// Название кредита
        /// </summary>
        public TypesOfCredits name { get; set; } = new TypesOfCredits();
        /// <summary>
        /// Клиент
        /// </summary>
        public Clients client { get; set; } = new Clients();
        /// <summary>
        /// сумма
        /// </summary>
        public double sum { get; set; } = 0.0;
        /// <summary>
        /// дата выдачи
        /// </summary>
        public DateTime date { get; set; } = DateTime.Today;

        public Credits() { }

        public Credits(TypesOfCredits _name, Clients _client, double _sum, DateTime _date) {
            this.name = _name;
            this.client = _client;
            this.sum = _sum;
            this.date = _date;
        }

        public bool IsValid {
            get {
                if (name == null)
                    return false;
                if (client == null)
                    return false;
                if (sum <= 0)
                    return false;
                if (date > DateTime.Today)
                    return false;
                return true;
            }
        }

        public override string ToString() {
            return $"Название: { name }\r\nКлиент: { client }\r\nСумма: { sum }\r\nДата выдачи: { date }\r\n";
        }
    }
}