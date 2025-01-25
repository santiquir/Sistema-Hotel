#include "ModificarHuespedes.h"
#include "string_conv.h"

ModificarHuespedes::ModificarHuespedes(wxWindow *parent, Persona *aModificar, GestionPersonas *m_agenda) : 
	ModificarHuesped(parent), aModificar(aModificar), m_agenda(m_agenda) {
	
	modPersona();
}

ModificarHuespedes::~ModificarHuespedes() {
	
}
void ModificarHuespedes::modPersona(){
	string nombre, apellido, email, telefono;
	long dni, dia, mes, anio;
	nombre = aModificar->verNombre();
	apellido = aModificar->verApellido();
	email = aModificar-> verMail();
	telefono= aModificar->verTelefono();
	dni = aModificar->verDNI();
	dia = aModificar->verDiaNacimiento();
	mes = aModificar->verMesNacimiento();
	anio = aModificar->verAnioNacimiento();
	string str_dni = to_string(dni);
	string str_dia = to_string(dia);
	string str_mes = to_string(mes);
	string str_anio = to_string(anio);
	
	TextoNombreActual->SetLabel(wxString(nombre));
	TextoApellidoActual->SetLabel(wxString(apellido));
	TextoEmailActual->SetLabel(wxString(email));
	TextoTelefonoActual->SetLabel(wxString(telefono));
	TextoDNIActual->SetLabel(wxString(str_dni));
	TextoDiaActual->SetLabel(wxString(str_dia));
	TextoMesActual->SetLabel(wxString(str_mes));
	TextoAnioActual->SetLabel(wxString(str_anio));
	
}

void ModificarHuespedes::ClickBotonModificar( wxCommandEvent& event )  {
	long nuevoDNI, nuevoDia, nuevoMes, nuevoAnio; string nuevoTelefono,nuevoNombre, nuevoApellido, nuevoEmail;
	
	if (!TextoNuevoDNI->GetValue().ToLong(&nuevoDNI) || nuevoDNI <= 0) {
		nuevoDNI = aModificar->verDNI();
	}
	
	if (!TextoDiaNuevo->GetValue().ToLong(&nuevoDia) || nuevoDia <= 0) {
		nuevoDia = aModificar->verDiaNacimiento();
	}
	
	if (!TextoMesNuevo->GetValue().ToLong(&nuevoMes) || nuevoMes <= 0) {
		nuevoMes = aModificar->verMesNacimiento();
	}
	
	if (!TextoAnioNuevo->GetValue().ToLong(&nuevoAnio) || nuevoAnio <= 0) {
		nuevoAnio = aModificar->verAnioNacimiento();
	}
	
	nuevoNombre = wx_to_std(TextoNombreNuevo->GetValue());
	if (nuevoNombre.empty()) {
		nuevoNombre = aModificar->verNombre();
	}
	
	nuevoNombre = wx_to_std(TextoNombreNuevo->GetValue());
	if (nuevoNombre.empty()) {
		nuevoNombre = aModificar->verNombre();
	}
	
	nuevoApellido = wx_to_std(TextoNuevoApellido->GetValue());
	if (nuevoApellido.empty()) {
		nuevoApellido = aModificar->verApellido();
	}
	
	nuevoEmail = wx_to_std(TextoNuevoEmail->GetValue());
	if (nuevoEmail.empty()) {
		nuevoEmail = aModificar->verMail();
	}
	
	nuevoTelefono = wx_to_std(TextoNuevoTelefono->GetValue());
	if (nuevoTelefono.empty()) {
		nuevoTelefono = aModificar->verTelefono();
	}
	
	aModificar->modificarNombre(nuevoNombre);
	aModificar->modificarApellido(nuevoApellido);
	aModificar->modificarDNI(nuevoDNI);
	aModificar->modificarTelefono(nuevoTelefono);
	aModificar->modificarEmail(nuevoEmail);
	aModificar->modificarDiaNacimiento(nuevoDia);
	aModificar->modificarMesNacimiento(nuevoMes);
	aModificar->modificarAnioNacimiento(nuevoAnio);
	
	m_agenda->Guardar();
	EndModal(1);
	
}

void ModificarHuespedes::ClickBotonCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

