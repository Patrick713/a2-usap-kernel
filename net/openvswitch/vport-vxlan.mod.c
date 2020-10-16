#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0x2fe0f7b, "ovs_netdev_tunnel_destroy" },
	{ 0x735b37dd, "ovs_vport_ops_unregister" },
	{ 0xf7150d6f, "__ovs_vport_ops_register" },
	{ 0x71622f13, "rtnl_delete_link" },
	{ 0xa5230979, "ovs_vport_free" },
	{ 0x1011d086, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8fa9c025, "dev_change_flags" },
	{ 0x351aa140, "vxlan_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xcd9cd3cf, "ovs_vport_alloc" },
	{ 0xcd279169, "nla_find" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5c2e213, "nla_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "openvswitch,vxlan");


MODULE_INFO(srcversion, "A5F47DD0AB5A51CE11CBA9D");
