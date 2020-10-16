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
	{ 0x6b0d8f8, "nf_log_unregister" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x9764afbc, "nf_log_register" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0x9442145b, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xd2aeaa09, "init_net" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d25a81c, "nf_log_dump_tcp_header" },
	{ 0x5c3d699b, "nf_log_dump_udp_header" },
	{ 0x6437ad52, "nf_log_dump_sk_uid_gid" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x333d83b0, "nf_log_set" },
	{ 0xfc67d60e, "nf_log_unset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "8FCD1C64185EDAA91986319");
