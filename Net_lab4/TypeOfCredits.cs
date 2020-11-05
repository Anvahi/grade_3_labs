using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Net_lab4_classes;

namespace Net_lab4_classes {
    /// <summary>
    /// класс кредиты
    /// </summary>
    public class TypesOfCredits
    {
        /// <summary>
        /// Название кредита
        /// </summary>
        public string Name { get; set; } = "";
        /// <summary>
        /// Условия получения кредита
        /// </summary>
        public string Terms { get; set; } = "";
        /// <summary>
        /// Процентная ставка оп кредиту
        /// </summary>
        public double CreditRate { get; set; } = 0.00;
        /// <summary>
        /// Срок
        /// </summary>
        public DateTime Date { get; set; } = DateTime.Today;

        public bool IsValid {
            get {
                if (String.IsNullOrWhiteSpace(Name))
                    return false;
                if (String.IsNullOrWhiteSpace(Terms))
                    return false;
                if (CreditRate <= 0)
                    return false;
                if (Date < DateTime.Today)
                    return false;
                return true;
            }
        }

        public TypesOfCredits() { }

        public TypesOfCredits(string _Name, string _Terms, double _CreditRate, DateTime _Date) {
            this.Name = _Name;
            this.Terms = _Terms;
            this.CreditRate = _CreditRate;
            this.Date = _Date;
        }

        public override string ToString() {
            return $"Название: { Name }\r\nУсловия получения: { Terms }\r\nПроцентная ставка: { CreditRate }\r\nСрок: { Date }\r\n";
        }
    }
}