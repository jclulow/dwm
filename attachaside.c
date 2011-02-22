void
attachaside(Client *c) {
	Client *at = nexttiled(c->mon->clients);;
	if(c->mon->sel == NULL || c->mon->sel->isfloating || !at) {
		attach(c);
		return;
	}
	c->next = at->next;
	at->next = c;
}

