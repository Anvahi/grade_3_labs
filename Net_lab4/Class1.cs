using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks; 

namespace NET_lab4_classes  {
    /// <summary>
    /// Класс типы кредитов
    /// </summary>
    public class Types_of_Credits : IValidatable
    {
        /// <summary>
        /// Название кредита
        /// </summary>
        public string name { get; set; } = "";
        /// <summary>
        /// Условия получения кредита
        /// </summary>
        public string terms { get; set; } = "";
        /// <summary>
        /// Процентная ставка оп кредиту
        /// </summary>
        public double credit_rate { get; set; } = 0.00;
        /// <summary>
        /// Срок
        /// </summary>
        public DateTime Date { get; set; } = DateTime.Today;

        public bool IsValid
        {
            get
            {
                if (String.IsNullOrWhiteSpace(name))
                    return false;
                if (String.IsNullOrWhiteSpace(terms))
                    return false;
                if (credit_rate <= 0)
                    return false;
                if (Date < DateTime.Today)
                    return false;
                return true;
            }
        }

        public Types_of_Credits()
        {

        }

        public Types_of_Credits(string _name, string _terms, double _credit_rate, DateTime _Date)
        {
            this.name = _name;
            this.terms = _terms;
            this.credit_rate = _credit_rate;
            this.Date = _Date;
        }

        public override string ToString()
        {
            return $"Название: { name }\r\nУсловия получения: { terms }\r\nПроцентная ставка: { credit_rate }\r\nСрок: { Date }\r\n" ;
        }
    }
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
        public string property_type { get; set; } = "";
        /// <summary>
        /// адрес
        /// </summary>
        public string adress { get; set; } = "";
        /// <summary>
        /// телефон
        /// </summary>
        public string phone { get; set; } = "";
        /// <summary>
        /// Контактное лицо
        /// </summary>
        public string contact_person { get; set; } = "";

        public Clients() { }

        public Clients (string _Name, string _property, string _adress, string _phone, string _contact_person)
        {
            this.Name = _Name;
            this.property_type = _property;
            this.adress = _adress;
            this.phone = _phone;
            this.contact_person = _contact_person;
        }

        public bool IsValid
        {
            get
            {
                if (String.IsNullOrWhiteSpace(Name))
                    return false;
                if (String.IsNullOrWhiteSpace(property_type))
                    return false;
                if (String.IsNullOrWhiteSpace(adress))
                    return false;
                if (String.IsNullOrWhiteSpace(phone))
                    return false;
                if (String.IsNullOrWhiteSpace(contact_person))
                    return false;
                return true;
            }
        }

        public override string ToString()
        {
            return $"Название: { Name }\r\nВид собственности: { property_type }\r\nАдрес: { adress }\r\nТелефон: { phone }\r\n Контактное лицо: {contact_person}";
        }
    }
    /// <summary>
    /// класс клиент
    /// </summary>
    public class Credits
    {
        /// <summary>
        /// Название кредита
        /// </summary>
        public Types_of_Credits name { get; set; } = new Types_of_Credits();
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

        public Credits()
        {

        }

        public Credits(Types_of_Credits _name, Clients _client, double _sum, DateTime _date)
        {
            this.name = _name;
            this.client = _client;
            this.sum = _sum;
            this.date = _date;
        }

        public bool IsValid
        {
            get
            {
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

        public override string ToString()
        {
            return $"Название: { name }\r\nКлиент: { client }\r\nСумма: { sum }\r\nДата выдачи: { date }\r\n";
        }
    }
}