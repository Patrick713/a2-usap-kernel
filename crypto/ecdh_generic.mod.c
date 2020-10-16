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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x938f99c5, "sg_copy_to_buffer" },
	{ 0x6039b599, "sg_copy_from_buffer" },
	{ 0xba9ee890, "crypto_register_kpp" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xed4ae15e, "ecc_make_pub_key" },
	{ 0x671f7aa5, "ecc_is_key_valid" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6315f31, "ecc_gen_privkey" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6f9953bc, "crypto_unregister_kpp" },
	{ 0xa76b31a2, "crypto_ecdh_shared_secret" },
};

MODULE_INFO(depends, "ecc");


MODULE_INFO(srcversion, "E0C474D4598F4B999D32EF1");
