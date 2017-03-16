/*
  module definition: <%= full_module_name %>
*/

static VALUE <%=module_var%>;

<%= method_code %>

/*
  Document-module: <%= full_module_name %>
  <%= description %>
 */
static void
<%=init_func%>()
{
    /* declare <%= full_module_name %> */
    <%=module_var%> = rb_define_module_under(<%=ns_var%>, "<%=module_name%>");
    <% @children.each do |m| %>
    <%= m.define %><% end %>
}
